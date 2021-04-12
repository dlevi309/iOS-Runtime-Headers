/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVPrincipalItem, CoreDAVInvertItem, CoreDAVGrantItem, CoreDAVDenyItem, CoreDAVItemWithNoChildren, CoreDAVItemWithHrefChildItem;

@interface CoreDAVACEItem : CoreDAVItem {

	CoreDAVPrincipalItem* _principal;
	CoreDAVInvertItem* _invert;
	CoreDAVGrantItem* _grant;
	CoreDAVDenyItem* _deny;
	CoreDAVItemWithNoChildren* _protectedItem;
	CoreDAVItemWithHrefChildItem* _inherited;

}

@property (nonatomic,retain) CoreDAVPrincipalItem * principal;                       //@synthesize principal=_principal - In the implementation block
@property (nonatomic,retain) CoreDAVInvertItem * invert;                             //@synthesize invert=_invert - In the implementation block
@property (nonatomic,retain) CoreDAVGrantItem * grant;                               //@synthesize grant=_grant - In the implementation block
@property (nonatomic,retain) CoreDAVDenyItem * deny;                                 //@synthesize deny=_deny - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * protectedItem;              //@synthesize protectedItem=_protectedItem - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithHrefChildItem * inherited;               //@synthesize inherited=_inherited - In the implementation block
+(id)copyParseRules;
+(id)privilegeItemWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(id)init;
-(id)description;
-(CoreDAVInvertItem *)invert;
-(void)write:(id)arg1 ;
-(CoreDAVGrantItem *)grant;
-(CoreDAVDenyItem *)deny;
-(void)setInherited:(CoreDAVItemWithHrefChildItem *)arg1 ;
-(void)setGrant:(CoreDAVGrantItem *)arg1 ;
-(void)setPrincipal:(CoreDAVPrincipalItem *)arg1 ;
-(CoreDAVPrincipalItem *)principal;
-(id)initWithPrincipal:(id)arg1 shouldInvert:(BOOL)arg2 action:(int)arg3 withPrivileges:(id)arg4 ;
-(CoreDAVItemWithHrefChildItem *)inherited;
-(CoreDAVItemWithNoChildren *)protectedItem;
-(void)setInvert:(CoreDAVInvertItem *)arg1 ;
-(void)setDeny:(CoreDAVDenyItem *)arg1 ;
-(void)setProtectedItem:(CoreDAVItemWithNoChildren *)arg1 ;
@end

