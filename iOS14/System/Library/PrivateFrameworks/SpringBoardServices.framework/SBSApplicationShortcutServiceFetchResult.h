/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <SpringBoardServices/SpringBoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface SBSApplicationShortcutServiceFetchResult : NSObject <BSXPCCoding, NSCopying> {

	NSArray* _staticApplicationShortcutItems;
	NSArray* _dynamicApplicationShortcutItems;
	NSArray* _composedApplicationShortcutItems;

}

@property (nonatomic,readonly) NSArray * staticApplicationShortcutItems;                //@synthesize staticApplicationShortcutItems=_staticApplicationShortcutItems - In the implementation block
@property (nonatomic,readonly) NSArray * dynamicApplicationShortcutItems;               //@synthesize dynamicApplicationShortcutItems=_dynamicApplicationShortcutItems - In the implementation block
@property (nonatomic,readonly) NSArray * composedApplicationShortcutItems;              //@synthesize composedApplicationShortcutItems=_composedApplicationShortcutItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)staticApplicationShortcutItems;
-(id)init;
-(id)initWithStaticApplicationShortcutItems:(id)arg1 dynamicApplicationShortcutItems:(id)arg2 composedApplicationShortcutItems:(id)arg3 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(NSArray *)dynamicApplicationShortcutItems;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)composedApplicationShortcutItems;
-(BOOL)isEqual:(id)arg1 ;
@end

