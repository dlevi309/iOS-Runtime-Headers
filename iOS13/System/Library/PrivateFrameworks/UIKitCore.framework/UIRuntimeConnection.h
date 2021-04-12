/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSource:(id)arg1 ;
-(id)source;
-(id)destination;
-(void)setLabel:(NSString *)arg1 ;
-(void)setDestination:(id)arg1 ;
-(NSString *)label;
-(void)connect;
-(void)connectForSimulator;
@end

