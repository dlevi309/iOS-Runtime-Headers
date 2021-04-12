/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/

#import <WebCore/WebCore-Structs.h>
#import <WebCore/WebItemProviderRegistrar.h>

@class NSString, NSData;

@interface WebItemProviderWritableObjectRegistrar : NSObject <WebItemProviderRegistrar> {

	RetainPtr<id<NSItemProviderWriting> >* _representingObject;

}

@property (nonatomic,readonly) id<NSItemProviderWriting> representingObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<NSItemProviderWriting> representingObjectForClient; 
@property (nonatomic,readonly) NSString * typeIdentifierForClient; 
@property (nonatomic,readonly) NSData * dataForClient; 
-(NSString *)description;
-(id)initWithObject:(id)arg1 ;
-(id<NSItemProviderWriting>)representingObjectForClient;
-(void)registerItemProvider:(id)arg1 ;
-(id<NSItemProviderWriting>)representingObject;
@end

