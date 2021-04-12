/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/


@protocol TSPObjectDelegate;
@class TSPUnknownContent, NSString, TSPObjectContext;

@interface TSPObject : NSObject {

	long long _identifier;
	long long _modifyObjectToken;
	long long _unarchiverIdentifier;
	TSPUnknownContent* _unknownContent;
	id<TSPObjectDelegate> _delegate;

}

@property (assign,nonatomic) long long tsp_identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long tsp_unarchiverIdentifier;                   //@synthesize unarchiverIdentifier=_unarchiverIdentifier - In the implementation block
@property (nonatomic,readonly) TSPUnknownContent * tsp_unknownContent;               //@synthesize unknownContent=_unknownContent - In the implementation block
@property (assign,nonatomic) long long tsp_modifyObjectToken;                        //@synthesize modifyObjectToken=_modifyObjectToken - In the implementation block
@property (assign,nonatomic,__weak) id<TSPObjectDelegate> tsp_delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL needsArchiving; 
@property (nonatomic,readonly) BOOL isCommandObject; 
@property (nonatomic,readonly) TSPObject * componentRootObject; 
@property (nonatomic,readonly) BOOL allowsImplicitComponentOwnership; 
@property (nonatomic,readonly) BOOL shouldDelayArchiving; 
@property (nonatomic,readonly) unsigned delayedArchivingPriority; 
@property (nonatomic,readonly) NSString * packageLocator; 
@property (nonatomic,readonly) BOOL isComponentRoot; 
@property (nonatomic,readonly) BOOL storeOutsideObjectArchive; 
@property (nonatomic,readonly) TSPObjectContext * context; 
+(BOOL)tsp_isTransientObjectIdentifier:(long long)arg1 ;
-(id)init;
-(id)initWithContext:(id)arg1 ;
-(TSPObjectContext *)context;
-(id)documentRoot;
-(NSString *)packageLocator;
-(id)initDocumentObjectWithContext:(id)arg1 ;
-(void)willModify;
-(void)willModifyForUpgrade;
-(BOOL)isComponentRoot;
-(BOOL)storeOutsideObjectArchive;
-(TSPObject *)componentRootObject;
-(BOOL)allowsImplicitComponentOwnership;
-(BOOL)shouldDelayArchiving;
-(unsigned)delayedArchivingPriority;
-(void)didLoadChildObjectFromDocumentSupport:(id)arg1 ;
-(BOOL)isCommandObject;
-(BOOL)allowsDuplicatesOutsideOfDocumentPackage;
-(BOOL)dirtiesDocumentPackage;
-(void)didFinishUnarchiving;
-(long long)tsp_identifier;
-(BOOL)needsArchiving;
-(void)setTsp_identifier:(long long)arg1 ;
-(long long)tsp_unarchiverIdentifier;
-(TSPUnknownContent *)tsp_unknownContent;
-(long long)tsp_modifyObjectToken;
-(void)setTsp_modifyObjectToken:(long long)arg1 ;
-(id<TSPObjectDelegate>)tsp_delegate;
-(void)setTsp_delegate:(id<TSPObjectDelegate>)arg1 ;
@end

