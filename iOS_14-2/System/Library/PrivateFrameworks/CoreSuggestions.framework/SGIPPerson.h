/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SGIPPerson : NSObject <NSSecureCoding, NSCopying> {

	NSString* _name;
	NSString* _handle;
	NSString* _handleType;

}

@property (nonatomic,retain) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * handle;                  //@synthesize handle=_handle - In the implementation block
@property (nonatomic,retain) NSString * handleType;              //@synthesize handleType=_handleType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)personWithIPPerson:(id)arg1 ;
-(void)setHandle:(NSString *)arg1 ;
-(NSString *)handle;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)handleType;
-(NSString *)name;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setHandleType:(NSString *)arg1 ;
-(id)toIPPerson;
-(BOOL)isEqualToPerson:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

