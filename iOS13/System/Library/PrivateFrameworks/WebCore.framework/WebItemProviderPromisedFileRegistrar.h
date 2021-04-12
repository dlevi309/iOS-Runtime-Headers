/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/

#import <WebCore/WebCore-Structs.h>
#import <WebCore/WebItemProviderRegistrar.h>

@class NSString, NSData;

@interface WebItemProviderPromisedFileRegistrar : NSObject <WebItemProviderRegistrar> {

	RetainPtr<NSString>* _typeIdentifier;
	BlockPtr<void (void ()(NSURL *, NSError *))>* _callback;

}

@property (nonatomic,readonly) NSString * typeIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<NSItemProviderWriting> representingObjectForClient; 
@property (nonatomic,readonly) NSString * typeIdentifierForClient; 
@property (nonatomic,readonly) NSData * dataForClient; 
-(NSString *)description;
-(NSString *)typeIdentifier;
-(void)registerItemProvider:(id)arg1 ;
-(id)initWithType:(id)arg1 callback:(/*^block*/id)arg2 ;
@end

