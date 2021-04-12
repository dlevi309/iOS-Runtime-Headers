/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(NSArray *)dynamicApplicationShortcutItems;
-(id)initWithStaticApplicationShortcutItems:(id)arg1 dynamicApplicationShortcutItems:(id)arg2 composedApplicationShortcutItems:(id)arg3 ;
-(NSArray *)staticApplicationShortcutItems;
-(NSArray *)composedApplicationShortcutItems;
@end

