/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(NSDate *)timestamp;
-(NSArray *)elements;
-(CGRect)bounds;
-(long long)displayType;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)addElement:(id)arg1 ;
-(long long)interfaceOrientation;
-(FBSDisplayConfiguration *)displayConfiguration;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(void)setDisplayConfiguration:(FBSDisplayConfiguration *)arg1 ;
-(id)display;
-(long long)displayBacklightLevel;
-(CGRect)referenceBounds;
-(id)_initWithElements:(id)arg1 ;
-(void)_sortElements;
-(void)removeElement:(id)arg1 ;
-(void)finalizeLayout;
-(void)setDisplayBacklightLevel:(long long)arg1 ;
@end

