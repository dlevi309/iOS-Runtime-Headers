/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
*/

#import <AppleServiceToolkit/AppleServiceToolkit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary;

@interface ASTControlCommand : NSObject <NSSecureCoding, NSCopying> {

	BOOL _forceSequential;
	BOOL _haltOnError;
	NSMutableDictionary* _actionStorage;

}

@property (assign,nonatomic) BOOL forceSequential;                             //@synthesize forceSequential=_forceSequential - In the implementation block
@property (assign,nonatomic) BOOL haltOnError;                                 //@synthesize haltOnError=_haltOnError - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * actionStorage;              //@synthesize actionStorage=_actionStorage - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)requestData;
-(void)updateAction:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)reset;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setForceSequential:(BOOL)arg1 ;
-(void)setHaltOnError:(BOOL)arg1 ;
-(NSMutableDictionary *)actionStorage;
-(BOOL)forceSequential;
-(BOOL)haltOnError;
-(void)setActionStorage:(NSMutableDictionary *)arg1 ;
-(id)requestWithData:(id)arg1 session:(id)arg2 queue:(id)arg3 ;
-(void)performActionsWithSession:(id)arg1 queue:(id)arg2 ;
-(BOOL)allActionsFinished;
@end

