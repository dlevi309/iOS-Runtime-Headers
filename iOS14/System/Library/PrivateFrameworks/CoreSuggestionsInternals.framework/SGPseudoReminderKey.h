/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <libobjc.A.dylib/SGEntityKey.h>

@class NSString;

@interface SGPseudoReminderKey : NSObject <SGEntityKey> {

	NSString* _groupId;

}

@property (nonatomic,readonly) NSString * groupId;                  //@synthesize groupId=_groupId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isSupportedEntityType:(long long)arg1 ;
-(id)serialize;
-(id)initWithSerialized:(id)arg1 ;
-(NSString *)groupId;
-(NSString *)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithGroupId:(id)arg1 ;
-(BOOL)isEqualToPseudoReminderKey:(id)arg1 ;
@end

