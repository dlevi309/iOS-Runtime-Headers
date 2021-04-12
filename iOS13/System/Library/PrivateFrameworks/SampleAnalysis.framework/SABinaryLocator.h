/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/


#import <SampleAnalysis/SampleAnalysis-Structs.h>
@class NSMutableDictionary, NSString;

@interface SABinaryLocator : NSObject {

	NSMutableDictionary* _mappings;
	NSString* _buildNumber;
	BOOL _dirty;
	BOOL _enabled;

}

@property (assign) BOOL enabled; 
+(id)sharedBinaryLocator;
-(id)init;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(oneway void)done;
-(id)mappings;
-(id)urlForUUID:(id)arg1 ;
-(BOOL)removeURLForUUID:(id)arg1 ;
-(BOOL)addURLForCSSymbolOwner:(CSTypeRef)arg1 ;
-(void)saveMappings;
-(BOOL)addURL:(id)arg1 ForUUID:(id)arg2 ;
-(id)initSharedBinaryLocator;
-(void)_saveMappings;
@end

