/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <CoreDAV/CoreDAVPropFindTaskDelegate.h>

@class NSMutableSet, NSString, NSSet;

@interface CoreDAVContainerInfoTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate> {

	int _phase;
	NSMutableSet* _containerURLs;
	NSMutableSet* _containers;
	int _containerInfoDepth;
	NSString* _appSpecificHomeSetPropNameSpace;
	NSString* _appSpecificHomeSetPropName;

}

@property (assign,nonatomic) int containerInfoDepth;                                                 //@synthesize containerInfoDepth=_containerInfoDepth - In the implementation block
@property (assign,nonatomic,__weak) id<CoreDAVContainerInfoTaskGroupDelegate> delegate; 
@property (nonatomic,readonly) NSSet * containerURLs;                                                //@synthesize containerURLs=_containerURLs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)startTaskGroup;
-(id)initWithAccountInfoProvider:(id)arg1 containerURLs:(id)arg2 taskManager:(id)arg3 ;
-(int)containerInfoDepth;
-(int)containerInfoDepthForURL:(id)arg1 ;
-(id)_copyContainerWithURL:(id)arg1 andProperties:(id)arg2 ;
-(id)_copyContainerParserMappings;
-(void)setContainerInfoDepth:(int)arg1 ;
-(void)_getContainerTopLevelInfo;
-(void)_getContainerHomeSet;
-(void)taskGroupWillCancelWithError:(id)arg1 ;
-(void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3 ;
-(NSSet *)containerURLs;
@end

