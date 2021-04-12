/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/BSProtobufSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BKSHIDEventDeferringEnvironment, BKSHIDEventDisplay, BKSHIDEventDeferringToken, NSString;

@interface BKSHIDEventBaseAttributes : NSObject <BSDescriptionProviding, BSProtobufSerializable, NSCopying> {

	unsigned short _options;
	int _source;
	BKSHIDEventDeferringEnvironment* _environment;
	BKSHIDEventDisplay* _display;
	BKSHIDEventDeferringToken* _token;

}

@property (nonatomic,retain) BKSHIDEventDeferringEnvironment * environment;              //@synthesize environment=_environment - In the implementation block
@property (nonatomic,retain) BKSHIDEventDisplay * display;                               //@synthesize display=_display - In the implementation block
@property (nonatomic,retain) BKSHIDEventDeferringToken * token;                          //@synthesize token=_token - In the implementation block
@property (assign,nonatomic) int source;                                                 //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) unsigned short options;                                     //@synthesize options=_options - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)protobufSchema;
+(id)baseAttributesFromResolution:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BKSHIDEventDeferringToken *)token;
-(unsigned short)options;
-(void)setSource:(int)arg1 ;
-(int)source;
-(BKSHIDEventDeferringEnvironment *)environment;
-(void)setEnvironment:(BKSHIDEventDeferringEnvironment *)arg1 ;
-(void)setOptions:(unsigned short)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setToken:(BKSHIDEventDeferringToken *)arg1 ;
-(void)setDisplay:(BKSHIDEventDisplay *)arg1 ;
-(BKSHIDEventDisplay *)display;
@end

