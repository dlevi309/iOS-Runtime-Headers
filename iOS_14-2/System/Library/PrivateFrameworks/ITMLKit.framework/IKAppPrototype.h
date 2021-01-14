/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@class NSMutableIndexSet, IKAppPrototypeIdentifier, IKDOMPrototype, NSDictionary, NSIndexSet;

@interface IKAppPrototype : NSObject {

	NSMutableIndexSet* _usageIndexes;
	IKAppPrototypeIdentifier* _identifier;
	IKDOMPrototype* _prototype;
	NSDictionary* _groupingValues;

}

@property (nonatomic,readonly) IKAppPrototypeIdentifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,__weak,readonly) IKDOMPrototype * prototype;                  //@synthesize prototype=_prototype - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * groupingValues;                 //@synthesize groupingValues=_groupingValues - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * usageIndexes; 
-(IKAppPrototypeIdentifier *)identifier;
-(id)dsepm_viewElement;
-(void)dsepm_setViewElement:(id)arg1 ;
-(IKDOMPrototype *)prototype;
-(NSDictionary *)groupingValues;
-(NSIndexSet *)usageIndexes;
-(void)updateUsageIndexesWithChangeSet:(id)arg1 ;
-(id)initWithPrototype:(id)arg1 dataItem:(id)arg2 ;
-(void)addUsageForIndex:(long long)arg1 ;
-(void)removeUsageForIndex:(long long)arg1 ;
-(id)_sparseObjectFromObject:(id)arg1 usingPropertyPaths:(id)arg2 ;
@end

