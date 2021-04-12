/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TrialProto-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary;

@interface TRIPBExtensionRegistry : NSObject <NSCopying> {

	NSMutableDictionary* mutableClassMap_;

}
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addExtensions:(id)arg1 ;
-(void)addExtension:(id)arg1 ;
-(id)extensionForDescriptor:(id)arg1 fieldNumber:(long long)arg2 ;
@end

