/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFItem.h>
#import <libobjc.A.dylib/NAIdentifiable.h>

@protocol HFMediaProfileContainer;
@class NSString;

@interface HFDataAnalyticsLogItem : HFItem <NAIdentifiable> {

	id<HFMediaProfileContainer> _mediaProfileContainer;
	NSString* _name;

}

@property (nonatomic,readonly) id<HFMediaProfileContainer> mediaProfileContainer;              //@synthesize mediaProfileContainer=_mediaProfileContainer - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                           //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)na_identity;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id<HFMediaProfileContainer>)mediaProfileContainer;
-(id)initWithMediaProfileContainer:(id)arg1 name:(id)arg2 ;
-(BOOL)isDisplayDisabled;
-(id)fetchLog;
@end

