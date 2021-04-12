/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/


@interface TUICFQueryResult : NSObject {

	BOOL _allowCallForDestinationID;
	BOOL _fromBlockList;

}

@property (assign,nonatomic) BOOL allowCallForDestinationID;                         //@synthesize allowCallForDestinationID=_allowCallForDestinationID - In the implementation block
@property (assign,getter=isFromBlockList,nonatomic) BOOL fromBlockList;              //@synthesize fromBlockList=_fromBlockList - In the implementation block
-(id)description;
-(BOOL)isFromBlockList;
-(BOOL)allowCallForDestinationID;
-(void)setAllowCallForDestinationID:(BOOL)arg1 ;
-(void)setFromBlockList:(BOOL)arg1 ;
@end

