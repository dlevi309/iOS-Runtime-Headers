/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)identifier;
-(NSString *)bundleIdentifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(long long)family;
-(void)setFamily:(long long)arg1 ;
-(void)setDisplay:(id<NTKTemplateComplicationDisplay>)arg1 ;
-(id<NTKTemplateComplicationDisplay>)display;
-(NTKComplication *)complication;
-(void)setComplication:(NTKComplication *)arg1 ;
@end

