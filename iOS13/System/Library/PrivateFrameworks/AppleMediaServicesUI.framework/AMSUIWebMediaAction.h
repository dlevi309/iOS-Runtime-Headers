/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <libobjc.A.dylib/AMSUIWebActionRunnable.h>

@class NSArray, NSString, AMSUIWebClientContext;

@interface AMSUIWebMediaAction : NSObject <AMSUIWebActionRunnable> {

	NSArray* _bundleIdentifiers;
	NSString* _clientIdentifier;
	NSString* _clientVersion;
	NSArray* _itemIdentifiers;
	NSArray* _includedResultKeys;
	long long _type;
	AMSUIWebClientContext* _context;

}

@property (nonatomic,retain) AMSUIWebClientContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSArray * bundleIdentifiers;                  //@synthesize bundleIdentifiers=_bundleIdentifiers - In the implementation block
@property (nonatomic,retain) NSString * clientIdentifier;                  //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,retain) NSString * clientVersion;                     //@synthesize clientVersion=_clientVersion - In the implementation block
@property (nonatomic,retain) NSArray * itemIdentifiers;                    //@synthesize itemIdentifiers=_itemIdentifiers - In the implementation block
@property (nonatomic,retain) NSArray * includedResultKeys;                 //@synthesize includedResultKeys=_includedResultKeys - In the implementation block
@property (assign,nonatomic) long long type;                               //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)type;
-(void)setType:(long long)arg1 ;
-(AMSUIWebClientContext *)context;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(NSArray *)itemIdentifiers;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(NSArray *)bundleIdentifiers;
-(NSString *)clientIdentifier;
-(void)setBundleIdentifiers:(NSArray *)arg1 ;
-(void)setIncludedResultKeys:(NSArray *)arg1 ;
-(NSString *)clientVersion;
-(void)setClientVersion:(NSString *)arg1 ;
-(void)setItemIdentifiers:(NSArray *)arg1 ;
-(NSArray *)includedResultKeys;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(id)runAction;
@end

