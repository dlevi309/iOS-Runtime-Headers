/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface MIDICIProfile : NSObject <NSSecureCoding> {

	NSString* name;
	NSData* profileID;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSData * profileID; 
+(id)description;
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(const void*)rawData;
-(NSData *)profileID;
-(id)initWithData:(id)arg1 name:(id)arg2 ;
@end

