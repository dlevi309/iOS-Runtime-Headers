/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTCoreModelRow.h>

@class NSString, AVTCoreModelRowOptions, AVTCoreModelPairing, NSOrderedSet;

@interface AVTCoreModelPresetsRow : NSObject <AVTCoreModelRow> {

	NSString* _identifier;
	NSString* _title;
	AVTCoreModelRowOptions* _options;
	AVTCoreModelPairing* _pairing;
	NSOrderedSet* _representedTags;

}

@property (nonatomic,copy,readonly) NSOrderedSet * representedTags;              //@synthesize representedTags=_representedTags - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                            //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) AVTCoreModelRowOptions * options;                 //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) AVTCoreModelPairing * pairing;               //@synthesize pairing=_pairing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AVTCoreModelPairing *)pairing;
-(id)initWithTitle:(id)arg1 representedTags:(id)arg2 pairing:(id)arg3 options:(id)arg4 ;
-(id)initWithTitle:(id)arg1 representedTags:(id)arg2 pairing:(id)arg3 options:(id)arg4 identifier:(id)arg5 ;
-(NSOrderedSet *)representedTags;
-(AVTCoreModelRowOptions *)options;
-(NSString *)description;
-(NSString *)identifier;
-(NSString *)title;
@end

