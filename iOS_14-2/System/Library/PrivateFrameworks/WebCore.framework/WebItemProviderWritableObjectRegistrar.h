/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/

#import <WebCore/WebCore-Structs.h>
#import <WebCore/WebItemProviderRegistrar.h>

@class NSString, NSData;

@interface WebItemProviderWritableObjectRegistrar : NSObject <WebItemProviderRegistrar> {

	RetainPtr<id<NSItemProviderWriting> >* _representingObject;

}

@property (nonatomic,readonly) id<NSItemProviderWriting> representingObject; 
@property (nonatomic,readonly) id<NSItemProviderWriting> representingObjectForClient; 
@property (nonatomic,readonly) NSString * typeIdentifierForClient; 
@property (nonatomic,readonly) NSData * dataForClient; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithObject:(id)arg1 ;
-(NSString *)description;
-(id<NSItemProviderWriting>)representingObjectForClient;
-(void)registerItemProvider:(id)arg1 ;
-(id<NSItemProviderWriting>)representingObject;
@end

