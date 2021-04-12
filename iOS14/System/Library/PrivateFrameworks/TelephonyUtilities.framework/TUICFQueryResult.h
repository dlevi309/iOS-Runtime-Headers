/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/


@interface TUICFQueryResult : NSObject {

	BOOL _allowCallForDestinationID;
	BOOL _fromBlockList;

}

@property (assign,nonatomic) BOOL allowCallForDestinationID;                         //@synthesize allowCallForDestinationID=_allowCallForDestinationID - In the implementation block
@property (assign,getter=isFromBlockList,nonatomic) BOOL fromBlockList;              //@synthesize fromBlockList=_fromBlockList - In the implementation block
-(BOOL)isFromBlockList;
-(void)setFromBlockList:(BOOL)arg1 ;
-(BOOL)allowCallForDestinationID;
-(void)setAllowCallForDestinationID:(BOOL)arg1 ;
-(id)description;
@end

