/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVActionBackedTask.h>

@class NSSet, CoreDAVResponseItem, NSURL;

@interface CoreDAVPropPatchTask : CoreDAVActionBackedTask {

	NSSet* _propPatchRemoveElements;
	NSSet* _propPatchSetElements;
	CoreDAVResponseItem* _responseItem;
	BOOL _sendOrder;
	int _absoluteOrder;
	NSURL* _priorOrderedURL;

}

@property (nonatomic,retain) NSSet * propPatchRemoveElements;                               //@synthesize propPatchRemoveElements=_propPatchRemoveElements - In the implementation block
@property (nonatomic,retain) NSSet * propPatchSetElements;                                  //@synthesize propPatchSetElements=_propPatchSetElements - In the implementation block
@property (nonatomic,retain) CoreDAVResponseItem * responseItem;                            //@synthesize responseItem=_responseItem - In the implementation block
@property (assign,nonatomic,__weak) id<CoreDAVPropPatchTaskDelegate> delegate; 
@property (nonatomic,retain) NSURL * priorOrderedURL;                                       //@synthesize priorOrderedURL=_priorOrderedURL - In the implementation block
@property (assign,nonatomic) int absoluteOrder;                                             //@synthesize absoluteOrder=_absoluteOrder - In the implementation block
-(id)description;
-(id)initWithURL:(id)arg1 ;
-(id)httpMethod;
-(id)requestBody;
-(id)additionalHeaderValues;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(id)initWithPropertiesToSet:(id)arg1 andRemove:(id)arg2 atURL:(id)arg3 ;
-(CoreDAVResponseItem *)responseItem;
-(void)setResponseItem:(CoreDAVResponseItem *)arg1 ;
-(int)absoluteOrder;
-(void)setAbsoluteOrder:(int)arg1 ;
-(void)setPriorOrderedURL:(NSURL *)arg1 ;
-(NSURL *)priorOrderedURL;
-(NSSet *)propPatchSetElements;
-(NSSet *)propPatchRemoveElements;
-(void)setPropPatchRemoveElements:(NSSet *)arg1 ;
-(void)setPropPatchSetElements:(NSSet *)arg1 ;
@end

