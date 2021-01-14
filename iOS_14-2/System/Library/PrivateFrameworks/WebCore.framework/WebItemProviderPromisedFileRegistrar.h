/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) id<NSItemProviderWriting> representingObjectForClient; 
@property (nonatomic,readonly) NSString * typeIdentifierForClient; 
@property (nonatomic,readonly) NSData * dataForClient; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)typeIdentifier;
-(NSString *)description;
-(void)registerItemProvider:(id)arg1 ;
-(id)initWithType:(id)arg1 callback:(/*^block*/id)arg2 ;
@end

