/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUAdContextProvider.h>

@class FCFeedDescriptor, NSString;

@interface NUFeedMetadataAdContextProvider : NSObject <NUAdContextProvider> {

	FCFeedDescriptor* _feedDescriptor;

}

@property (nonatomic,readonly) FCFeedDescriptor * feedDescriptor;              //@synthesize feedDescriptor=_feedDescriptor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FCFeedDescriptor *)feedDescriptor;
-(id)adContextValueForKeyPath:(id)arg1 ;
-(id)initWithFeedDescriptor:(id)arg1 ;
@end

