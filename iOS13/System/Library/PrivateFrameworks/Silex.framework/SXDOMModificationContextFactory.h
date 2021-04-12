/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXDOMModificationContextFactory.h>

@protocol SXDOMModificationContextFactory <NSObject>
@required
-(id)createModificationContextWithLayoutOptions:(id)arg1;

@end


@protocol SXDocumentProviding;
@class NSString;

@interface SXDOMModificationContextFactory : NSObject <SXDOMModificationContextFactory> {

	id<SXDocumentProviding> _documentProvider;

}

@property (nonatomic,readonly) id<SXDocumentProviding> documentProvider;              //@synthesize documentProvider=_documentProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXDocumentProviding>)documentProvider;
-(id)createModificationContextWithLayoutOptions:(id)arg1 ;
-(id)initWithDocumentProvider:(id)arg1 ;
@end

