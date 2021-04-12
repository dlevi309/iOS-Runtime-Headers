/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDAppContainerTuple, NSString;

@interface CKDAppContainerAccountTuple : NSObject <NSCopying> {

	CKDAppContainerTuple* _appContainerTuple;
	NSString* _accountID;

}

@property (nonatomic,retain) CKDAppContainerTuple * appContainerTuple;              //@synthesize appContainerTuple=_appContainerTuple - In the implementation block
@property (nonatomic,copy) NSString * accountID;                                    //@synthesize accountID=_accountID - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)accountID;
-(id)CKPropertiesDescription;
-(void)setAccountID:(NSString *)arg1 ;
-(id)initWithAppContainerTuple:(id)arg1 accountID:(id)arg2 ;
-(CKDAppContainerTuple *)appContainerTuple;
-(void)setAppContainerTuple:(CKDAppContainerTuple *)arg1 ;
@end

