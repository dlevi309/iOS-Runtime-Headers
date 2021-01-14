/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TrialProto-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary;

@interface TRIPBExtensionRegistry : NSObject <NSCopying> {

	NSMutableDictionary* mutableClassMap_;

}
-(void)addExtensions:(id)arg1 ;
-(id)init;
-(void)addExtension:(id)arg1 ;
-(id)extensionForDescriptor:(id)arg1 fieldNumber:(long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

