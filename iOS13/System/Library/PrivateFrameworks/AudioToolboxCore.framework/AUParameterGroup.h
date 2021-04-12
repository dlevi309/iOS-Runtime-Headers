/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
*/

#import <AudioToolboxCore/AudioToolboxCore-Structs.h>
#import <AudioToolboxCore/AUParameterNode.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSMutableDictionary;

@interface AUParameterGroup : AUParameterNode <NSSecureCoding> {

	NSArray* _children;
	NSMutableDictionary* _childIndicesByIdentifier;

}

@property (nonatomic,retain) NSMutableDictionary * childIndicesByIdentifier;              //@synthesize childIndicesByIdentifier=_childIndicesByIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * children;                                        //@synthesize children=_children - In the implementation block
@property (nonatomic,readonly) NSArray * allParameters; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(NSArray *)children;
-(BOOL)isGroup;
-(void)_serialize:(CASerializer*)arg1 ;
-(NSArray *)allParameters;
-(void)_deserialize:(CADeserializer*)arg1 ;
-(id)copyNodeWithOffset:(unsigned long long)arg1 ;
-(void)_observersChanged:(BOOL)arg1 deltaCount:(int)arg2 ;
-(id)initWithChildren:(id)arg1 ;
-(id)initWithID:(id)arg1 name:(id)arg2 children:(id)arg3 ;
-(void)_indexChildren;
-(id)initWithTemplate:(id)arg1 identifier:(id)arg2 name:(id)arg3 addressOffset:(unsigned long long)arg4 ;
-(NSMutableDictionary *)childIndicesByIdentifier;
-(void)setChildIndicesByIdentifier:(NSMutableDictionary *)arg1 ;
@end

