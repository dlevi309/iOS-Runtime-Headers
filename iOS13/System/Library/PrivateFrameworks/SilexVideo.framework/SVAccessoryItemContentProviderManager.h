/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVAccessoryItemContentProviderManager.h>

@protocol SVAccessoryItemContentProviderManager <NSObject>
@required
-(void)registerAccessoryItem:(id)arg1 withContentProvider:(id)arg2;

@end

#import <libobjc.A.dylib/SVAccessoryItemContentManager.h>

@class NSMapTable, NSString;

@interface SVAccessoryItemContentProviderManager : NSObject <SVAccessoryItemContentProviderManager, SVAccessoryItemContentManager> {

	NSMapTable* _contentProviders;

}

@property (nonatomic,readonly) NSMapTable * contentProviders;              //@synthesize contentProviders=_contentProviders - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)updateAccessoryItem:(id)arg1 forVideo:(id)arg2 animated:(BOOL)arg3 ;
-(void)registerAccessoryItem:(id)arg1 withContentProvider:(id)arg2 ;
-(NSMapTable *)contentProviders;
@end

