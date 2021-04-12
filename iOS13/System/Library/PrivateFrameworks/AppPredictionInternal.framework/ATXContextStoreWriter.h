/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <libobjc.A.dylib/ATXContextStoreWriterProtocol.h>

@class _CDClientContext, _CDContextualKeyPath, NSString;

@interface ATXContextStoreWriter : NSObject <ATXContextStoreWriterProtocol> {

	_CDClientContext* _context;
	_CDContextualKeyPath* _keyPath;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)setWithObject:(id)arg1 ;
-(id)initWithContext:(id)arg1 keyPath:(id)arg2 ;
@end

