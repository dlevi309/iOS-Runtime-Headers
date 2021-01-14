/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
*/


@class NSString;

@interface _ICQPageSpecification : NSObject {

	BOOL _hasCancelButtonForBack;
	NSString* _pageIdentifier;
	NSString* _pageTitle;
	NSString* _pageClassIdentifier;

}

@property (nonatomic,retain) NSString * pageIdentifier;                   //@synthesize pageIdentifier=_pageIdentifier - In the implementation block
@property (nonatomic,retain) NSString * pageTitle;                        //@synthesize pageTitle=_pageTitle - In the implementation block
@property (assign,nonatomic) BOOL hasCancelButtonForBack;                 //@synthesize hasCancelButtonForBack=_hasCancelButtonForBack - In the implementation block
@property (nonatomic,retain) NSString * pageClassIdentifier;              //@synthesize pageClassIdentifier=_pageClassIdentifier - In the implementation block
-(void)setPageTitle:(NSString *)arg1 ;
-(id)debugDescription;
-(NSString *)pageTitle;
-(void)setPageIdentifier:(NSString *)arg1 ;
-(NSString *)pageIdentifier;
-(void)setHasCancelButtonForBack:(BOOL)arg1 ;
-(id)copyWithBindings:(id)arg1 ;
-(BOOL)hasCancelButtonForBack;
-(NSString *)pageClassIdentifier;
-(void)setPageClassIdentifier:(NSString *)arg1 ;
@end

