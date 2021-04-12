/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface CHEncodedStrokeIdentifier : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _savedHash;
	NSData* _encodedStrokeIdentifier;

}

@property (nonatomic,retain,readonly) NSData * encodedStrokeIdentifier;              //@synthesize encodedStrokeIdentifier=_encodedStrokeIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(NSData *)encodedStrokeIdentifier;
-(BOOL)isEqualToCHEncodedStrokeIdentifier:(id)arg1 ;
@end

