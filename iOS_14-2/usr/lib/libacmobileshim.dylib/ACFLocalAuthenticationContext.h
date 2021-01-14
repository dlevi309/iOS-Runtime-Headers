/*
* Generated on Thursday, January 14, 2021 at 2:29:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

#import <libobjc.A.dylib/ACFLocalAuthenticationContextProtocol.h>

@class NSString, LAContext;

@interface ACFLocalAuthenticationContext : NSObject <ACFLocalAuthenticationContextProtocol> {

	LAContext* _context;
	NSString* _localizedReason;
	NSString* _localizedFallbackTitle;

}

@property (nonatomic,retain) LAContext * context;                          //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSString * localizedReason;                     //@synthesize localizedReason=_localizedReason - In the implementation block
@property (nonatomic,copy) NSString * localizedFallbackTitle;              //@synthesize localizedFallbackTitle=_localizedFallbackTitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(LAContext *)context;
-(BOOL)canEvaluatePolicy:(long long)arg1 error:(id*)arg2 ;
-(NSString *)localizedFallbackTitle;
-(void)setLocalizedReason:(NSString *)arg1 ;
-(void)reset;
-(void)setLocalizedFallbackTitle:(NSString *)arg1 ;
-(NSString *)localizedReason;
-(void)dealloc;
-(void)setContext:(LAContext *)arg1 ;
-(void)evaluatePolicy:(long long)arg1 completion:(/*^block*/id)arg2 ;
@end

