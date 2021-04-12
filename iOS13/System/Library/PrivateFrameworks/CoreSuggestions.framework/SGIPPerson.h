/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)handle;
-(void)setHandle:(NSString *)arg1 ;
-(void)setHandleType:(NSString *)arg1 ;
-(NSString *)handleType;
-(id)toIPPerson;
-(BOOL)isEqualToPerson:(id)arg1 ;
@end

