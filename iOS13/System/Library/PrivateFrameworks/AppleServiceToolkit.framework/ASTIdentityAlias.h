/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
*/

#import <AppleServiceToolkit/AppleServiceToolkit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface ASTIdentityAlias : NSObject <NSCopying, NSSecureCoding> {

	NSDictionary* _dictionary;

}

@property (nonatomic,retain) NSDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)identityAliasWithSerialNumber:(id)arg1 ;
+(id)identityAliasWithMainLogicBoardSerialNumber:(id)arg1 ;
+(id)identityAliasWithChipId:(id)arg1 uniqueChipId:(id)arg2 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionary;
-(void)setDictionary:(NSDictionary *)arg1 ;
-(id)initWithSerialNumber:(id)arg1 ;
-(id)initWithMainLogicBoardSerialNumber:(id)arg1 ;
-(id)initWithChipId:(id)arg1 uniqueChipId:(id)arg2 ;
@end

