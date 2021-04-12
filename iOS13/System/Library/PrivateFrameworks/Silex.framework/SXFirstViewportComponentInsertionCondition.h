/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXComponentInsertionCondition.h>

@class NSString;

@interface SXFirstViewportComponentInsertionCondition : NSObject <SXComponentInsertionCondition> {

	BOOL _allowFirstViewportException;

}

@property (assign,nonatomic) BOOL allowFirstViewportException;              //@synthesize allowFirstViewportException=_allowFirstViewportException - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)validateMarker:(id)arg1 componentTraits:(unsigned long long)arg2 layoutProvider:(id)arg3 ;
-(id)initWithAllowFirstViewportException:(BOOL)arg1 ;
-(BOOL)allowFirstViewportException;
-(void)setAllowFirstViewportException:(BOOL)arg1 ;
@end

