/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithAllowFirstViewportException:(BOOL)arg1 ;
-(id)init;
-(void)setAllowFirstViewportException:(BOOL)arg1 ;
-(BOOL)allowFirstViewportException;
-(BOOL)validateMarker:(id)arg1 componentTraits:(unsigned long long)arg2 layoutProvider:(id)arg3 ;
@end

