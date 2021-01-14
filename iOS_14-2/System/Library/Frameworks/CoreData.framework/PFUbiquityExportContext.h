/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSMutableDictionary, NSString, PFUbiquityLocation;

@interface PFUbiquityExportContext : NSObject {

	NSMutableDictionary* _storeNameToStoreExportContext;
	NSMutableDictionary* _ubiquityRootPathToStack;
	NSString* _localPeerID;
	PFUbiquityLocation* _ubiquityRootLocation;
	BOOL _useLocalStorage;

}

@property (nonatomic,readonly) NSString * localPeerID;              //@synthesize localPeerID=_localPeerID - In the implementation block
@property (assign,nonatomic) BOOL useLocalStorage;                  //@synthesize useLocalStorage=_useLocalStorage - In the implementation block
-(void)setUseLocalStorage:(BOOL)arg1 ;
-(id)initWithLocalPeerID:(id)arg1 andUbiquityRootLocation:(id)arg2 ;
-(id)storeExportContextForStoreName:(id)arg1 ;
-(id)storeExportContextForStore:(id)arg1 ;
-(NSString *)localPeerID;
-(id)description;
-(BOOL)useLocalStorage;
-(void)dealloc;
@end

