/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
*/


#import <CoreMediaStream/CoreMediaStream-Structs.h>
@class NSMutableDictionary, NSString;

@interface MSASPersonInfoManager : NSObject {

	NSMutableDictionary* _personIDToPersonInfoDictionary;
	NSString* _pathForPersonInfoDictionary;

}

@property (nonatomic,retain) NSMutableDictionary * personIDToPersonInfoDictionary;              //@synthesize personIDToPersonInfoDictionary=_personIDToPersonInfoDictionary - In the implementation block
@property (nonatomic,retain) NSString * pathForPersonInfoDictionary;                            //@synthesize pathForPersonInfoDictionary=_pathForPersonInfoDictionary - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedManager;
-(void)initWithPath:(id)arg1 ;
-(id)firstNameForPersonID:(id)arg1 ;
-(id)lastNameForPersonID:(id)arg1 ;
-(id)fullNameForPersonID:(id)arg1 ;
-(id)emailForPersonID:(id)arg1 ;
-(BOOL)updateWithSharingRelationship:(id)arg1 ;
-(NSMutableDictionary *)personIDToPersonInfoDictionary;
-(void)setPersonIDToPersonInfoDictionary:(NSMutableDictionary *)arg1 ;
-(NSString *)pathForPersonInfoDictionary;
-(void)setPathForPersonInfoDictionary:(NSString *)arg1 ;
@end

