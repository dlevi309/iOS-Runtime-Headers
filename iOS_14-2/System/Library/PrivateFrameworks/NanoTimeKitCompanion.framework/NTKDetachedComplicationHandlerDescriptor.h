/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol NTKTemplateComplicationDisplay;
@class NSString, NTKComplication;

@interface NTKDetachedComplicationHandlerDescriptor : NSObject {

	NSString* _identifier;
	long long _family;
	NTKComplication* _complication;
	id<NTKTemplateComplicationDisplay> _display;
	NSString* _bundleIdentifier;

}

@property (nonatomic,copy) NSString * identifier;                                            //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long family;                                               //@synthesize family=_family - In the implementation block
@property (nonatomic,retain) NTKComplication * complication;                                 //@synthesize complication=_complication - In the implementation block
@property (assign,nonatomic,__weak) id<NTKTemplateComplicationDisplay> display;              //@synthesize display=_display - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                                      //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(void)setDisplay:(id<NTKTemplateComplicationDisplay>)arg1 ;
-(NSString *)bundleIdentifier;
-(long long)family;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(id<NTKTemplateComplicationDisplay>)display;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(NTKComplication *)complication;
-(void)setComplication:(NTKComplication *)arg1 ;
-(void)setFamily:(long long)arg1 ;
@end

