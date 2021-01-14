/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/GCJSONRepresentable.h>

@class NSMutableDictionary, NSMutableSet, NSString;

@interface GCHapticCapabilityGraph : NSObject <NSSecureCoding, GCJSONRepresentable> {

	NSMutableDictionary* _nodes;
	NSMutableSet* _exposedCapabilities;
	NSMutableSet* _exposedLeafCapabilities;
	NSMutableSet* _allCapabilities;
	NSMutableSet* _allLeafCapabilities;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSMutableDictionary * nodes;                         //@synthesize nodes=_nodes - In the implementation block
@property (nonatomic,retain) NSMutableSet * exposedCapabilities;                  //@synthesize exposedCapabilities=_exposedCapabilities - In the implementation block
@property (nonatomic,retain) NSMutableSet * exposedLeafCapabilities;              //@synthesize exposedLeafCapabilities=_exposedLeafCapabilities - In the implementation block
@property (nonatomic,retain) NSMutableSet * allCapabilities;                      //@synthesize allCapabilities=_allCapabilities - In the implementation block
@property (nonatomic,retain) NSMutableSet * allLeafCapabilities;                  //@synthesize allLeafCapabilities=_allLeafCapabilities - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setNodes:(NSMutableDictionary *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(id)jsonDictionaryRepresentation;
-(NSMutableDictionary *)nodes;
-(NSMutableSet *)allCapabilities;
-(id)initWithJSONDictionaryRepresentation:(id)arg1 ;
-(NSMutableSet *)exposedCapabilities;
-(void)setExposedCapabilities:(NSMutableSet *)arg1 ;
-(NSMutableSet *)exposedLeafCapabilities;
-(void)setExposedLeafCapabilities:(NSMutableSet *)arg1 ;
-(void)setAllCapabilities:(NSMutableSet *)arg1 ;
-(NSMutableSet *)allLeafCapabilities;
-(void)setAllLeafCapabilities:(NSMutableSet *)arg1 ;
-(id)actuatorsForNode:(id)arg1 ;
@end

