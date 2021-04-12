/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


@class BRCItemID, BRFieldCKInfo;

@interface BRCPCSChainInfo : NSObject {

	char _itemType;
	BOOL _aliasTargetZoneIsShared;
	unsigned _chainState;
	BRCItemID* _itemID;
	BRCItemID* _parentID;
	BRFieldCKInfo* _structuralCKInfo;
	BRFieldCKInfo* _contentCKInfo;

}

@property (nonatomic,readonly) BRCItemID * itemID;                            //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,readonly) BRCItemID * parentID;                          //@synthesize parentID=_parentID - In the implementation block
@property (nonatomic,readonly) BRFieldCKInfo * structuralCKInfo;              //@synthesize structuralCKInfo=_structuralCKInfo - In the implementation block
@property (nonatomic,readonly) BRFieldCKInfo * contentCKInfo;                 //@synthesize contentCKInfo=_contentCKInfo - In the implementation block
@property (nonatomic,readonly) char itemType;                                 //@synthesize itemType=_itemType - In the implementation block
@property (nonatomic,readonly) unsigned chainState;                           //@synthesize chainState=_chainState - In the implementation block
@property (nonatomic,readonly) BOOL aliasTargetZoneIsShared;                  //@synthesize aliasTargetZoneIsShared=_aliasTargetZoneIsShared - In the implementation block
-(BRCItemID *)itemID;
-(char)itemType;
-(BRCItemID *)parentID;
-(id)initWithItemID:(id)arg1 parentID:(id)arg2 structuralCKInfo:(id)arg3 contentCKInfo:(id)arg4 itemType:(char)arg5 aliasTargetZoneIsShared:(BOOL)arg6 chainState:(unsigned)arg7 ;
-(BRFieldCKInfo *)structuralCKInfo;
-(BRFieldCKInfo *)contentCKInfo;
-(unsigned)chainState;
-(BOOL)aliasTargetZoneIsShared;
@end

