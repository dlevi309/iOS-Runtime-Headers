/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/

#import <AppleAccount/AppleAccount-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface AASuspensionInfo : NSObject <NSCopying> {

	NSDictionary* _suspensionInfoDictionary;

}

@property (getter=isiCloudSuspended,nonatomic,readonly) BOOL iCloudSuspended; 
@property (getter=isFamilySuspended,nonatomic,readonly) BOOL familySuspended; 
-(id)init;
-(BOOL)isiCloudSuspended;
-(BOOL)isFamilySuspended;
-(id)initWithDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

