/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)supportsSecureCoding;
+(id)description;
-(id)init;
-(const void*)bytes;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)profileID;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)initWithData:(id)arg1 name:(id)arg2 ;
@end

