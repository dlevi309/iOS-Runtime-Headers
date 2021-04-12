/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithFeedDescriptor:(id)arg1 ;
-(id)adContextValueForKeyPath:(id)arg1 ;
@end

