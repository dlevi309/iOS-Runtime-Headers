/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUAdContextProvider.h>

@class FCIssue, NSString;

@interface NUIssueAdContextProvider : NSObject <NUAdContextProvider> {

	FCIssue* _issue;

}

@property (nonatomic,readonly) FCIssue * issue;                     //@synthesize issue=_issue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FCIssue *)issue;
-(id)initWithIssue:(id)arg1 ;
-(id)adContextValueForKeyPath:(id)arg1 ;
@end

