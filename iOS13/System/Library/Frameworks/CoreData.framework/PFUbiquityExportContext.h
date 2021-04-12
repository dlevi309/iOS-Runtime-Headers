/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(NSString *)localPeerID;
-(id)initWithLocalPeerID:(id)arg1 andUbiquityRootLocation:(id)arg2 ;
-(void)setUseLocalStorage:(BOOL)arg1 ;
-(id)storeExportContextForStoreName:(id)arg1 ;
-(id)storeExportContextForStore:(id)arg1 ;
-(BOOL)useLocalStorage;
@end

