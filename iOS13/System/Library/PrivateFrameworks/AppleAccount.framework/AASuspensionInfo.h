/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)isiCloudSuspended;
-(BOOL)isFamilySuspended;
@end

