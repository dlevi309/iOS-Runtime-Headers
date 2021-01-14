/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)accountID;
-(void)setAccountID:(NSString *)arg1 ;
-(id)initWithAppContainerTuple:(id)arg1 accountID:(id)arg2 ;
-(id)CKPropertiesDescription;
-(id)description;
-(void)setAppContainerTuple:(CKDAppContainerTuple *)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CKDAppContainerTuple *)appContainerTuple;
-(BOOL)isEqual:(id)arg1 ;
@end

