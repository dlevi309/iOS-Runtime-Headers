/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSMutableArray, FBSDisplayConfiguration, NSDate, NSArray, NSString;

@interface FBSDisplayLayout : NSObject <BSXPCCoding, BSDescriptionProviding> {

	NSMutableArray* _elements;
	FBSDisplayConfiguration* _displayConfiguration;
	long long _interfaceOrientation;
	long long _backlightLevel;
	NSDate* _timestamp;

}

@property (nonatomic,retain) FBSDisplayConfiguration * displayConfiguration;              //@synthesize displayConfiguration=_displayConfiguration - In the implementation block
@property (assign,nonatomic) long long interfaceOrientation;                              //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (assign,nonatomic) long long displayBacklightLevel;                             //@synthesize backlightLevel=_backlightLevel - In the implementation block
@property (nonatomic,copy,readonly) NSArray * elements;                                   //@synthesize elements=_elements - In the implementation block
@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) NSDate * timestamp;                                        //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGRect)bounds;
-(id)succinctDescription;
-(NSArray *)elements;
-(id)addElement:(id)arg1 ;
-(id)init;
-(long long)displayType;
-(NSDate *)timestamp;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(CGRect)referenceBounds;
-(FBSDisplayConfiguration *)displayConfiguration;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(void)_sortElements;
-(NSString *)description;
-(void)setDisplayConfiguration:(FBSDisplayConfiguration *)arg1 ;
-(void)setDisplayBacklightLevel:(long long)arg1 ;
-(long long)interfaceOrientation;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)finalizeLayout;
-(id)_initWithElements:(id)arg1 ;
-(id)display;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(long long)displayBacklightLevel;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)removeElement:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

