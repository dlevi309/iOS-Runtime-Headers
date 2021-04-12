/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface UIRuntimeConnection : NSObject <NSCoding> {

	id _source;
	id _destination;
	NSString* _label;

}

@property (nonatomic,retain) id source;                   //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) id destination;              //@synthesize destination=_destination - In the implementation block
@property (nonatomic,copy) NSString * label;              //@synthesize label=_label - In the implementation block
-(void)setDestination:(id)arg1 ;
-(void)connect;
-(void)encodeWithCoder:(id)arg1 ;
-(void)connectForSimulator;
-(void)setSource:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(id)destination;
-(id)source;
@end

