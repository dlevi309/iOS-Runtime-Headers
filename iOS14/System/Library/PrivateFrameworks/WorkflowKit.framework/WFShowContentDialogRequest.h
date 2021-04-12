/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFDialogRequest.h>
#import <libobjc.A.dylib/WFDialogRequestViewControllerSupport.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class WFDialogButton, NSData, WFContentCollection, NSString;

@interface WFShowContentDialogRequest : WFDialogRequest <WFDialogRequestViewControllerSupport, NSSecureCoding> {

	WFDialogButton* _doneButton;
	NSData* _archivedContentCollection;
	WFContentCollection* _cachedContentCollection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSData * archivedContentCollection;                           //@synthesize archivedContentCollection=_archivedContentCollection - In the implementation block
@property (nonatomic,retain) WFContentCollection * cachedContentCollection;              //@synthesize cachedContentCollection=_cachedContentCollection - In the implementation block
@property (nonatomic,copy,readonly) WFDialogButton * doneButton;                         //@synthesize doneButton=_doneButton - In the implementation block
+(BOOL)supportsSecureCoding;
-(Class)wf_dialogViewControllerClass;
-(WFDialogButton *)doneButton;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithContentCollection:(id)arg1 attribution:(id)arg2 prompt:(id)arg3 ;
-(void)getContentCollectionWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSData *)archivedContentCollection;
-(void)setArchivedContentCollection:(NSData *)arg1 ;
-(WFContentCollection *)cachedContentCollection;
-(void)setCachedContentCollection:(WFContentCollection *)arg1 ;
@end

