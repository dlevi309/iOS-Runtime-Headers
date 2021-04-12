/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithHeadline:(id)arg1 issue:(id)arg2 ;
-(id)adContextValueForKeyPath:(id)arg1 ;
-(id)contextProvidersForKeyPath:(id)arg1 ;
-(FCIssue *)issue;
@end

