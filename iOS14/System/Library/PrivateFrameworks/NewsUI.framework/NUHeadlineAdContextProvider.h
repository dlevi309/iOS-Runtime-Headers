/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUAdContextProvider.h>

@protocol FCHeadlineProviding;
@class FCIssue, NSString;

@interface NUHeadlineAdContextProvider : NSObject <NUAdContextProvider> {

	id<FCHeadlineProviding> _headline;
	FCIssue* _issue;

}

@property (nonatomic,readonly) id<FCHeadlineProviding> headline;              //@synthesize headline=_headline - In the implementation block
@property (nonatomic,readonly) FCIssue * issue;                               //@synthesize issue=_issue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<FCHeadlineProviding>)headline;
-(FCIssue *)issue;
-(id)adContextValueForKeyPath:(id)arg1 ;
-(id)contextProvidersForKeyPath:(id)arg1 ;
-(id)initWithHeadline:(id)arg1 issue:(id)arg2 ;
@end
