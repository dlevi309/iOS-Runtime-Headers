/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
*/

#import <CloudDocsUI/_UIDocumentPickerURLContainerModel.h>

@class NSString;

@interface _UIDocumentPickerSearchContainerModel : _UIDocumentPickerURLContainerModel {

	NSString* _queryString;

}

@property (nonatomic,copy) NSString * queryString;              //@synthesize queryString=_queryString - In the implementation block
-(void)arrayController:(id)arg1 modelChanged:(id)arg2 differences:(id)arg3 ;
-(NSString *)queryString;
-(void)setQueryString:(NSString *)arg1 ;
-(id)scopes;
-(id)displayTitle;
-(id)initWithURL:(id)arg1 pickableTypes:(id)arg2 mode:(unsigned long long)arg3 ;
-(id)initWithPickableTypes:(id)arg1 mode:(unsigned long long)arg2 ;
-(void)startMonitoringChanges;
-(void)_updateObserverForQuery;
-(BOOL)shouldShowTopLevelContainers;
-(id)_createObserver;
@end

