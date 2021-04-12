/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CacheDelete.framework/CacheDelete
*/


@class NSExtensionContext;

@interface CacheDeleteServiceInfo : NSObject {

	BOOL _doNotQuery;
	NSExtensionContext* _extensionContext;

}

@property (nonatomic,readonly) NSExtensionContext * extensionContext;              //@synthesize extensionContext=_extensionContext - In the implementation block
@property (assign) BOOL doNotQuery;                                                //@synthesize doNotQuery=_doNotQuery - In the implementation block
+(id)serviceInfoWithExtensionContext:(id)arg1 ;
-(NSExtensionContext *)extensionContext;
-(id)initWithExtensionContext:(id)arg1 ;
-(BOOL)doNotQuery;
-(void)setDoNotQuery:(BOOL)arg1 ;
@end

